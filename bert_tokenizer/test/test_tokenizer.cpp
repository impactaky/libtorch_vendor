// Copyright 2024 Team Re-Boot. All rights reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include <gtest/gtest.h>

#include <bert_tokenizer/tokenizer.hpp>

TEST(BERT, tokenize)
{
  using namespace bert_tokenizer;
  const auto tokenizer = FullTokenizer(get_vocab_path(PretrainedVocab::BERT_BASE_UNCASED));
  auto ids = tokenizer.convertTokensToIds(tokenizer.tokenize("Hello World"));
  // EXPECT_EQ(ids.size(), static_cast<size_t>(4));
  EXPECT_EQ(ids[0], 0);
  EXPECT_EQ(ids[1], 1);
}

int main(int argc, char ** argv)
{
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
