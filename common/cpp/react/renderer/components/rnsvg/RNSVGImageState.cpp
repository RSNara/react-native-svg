/*
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

#include <rnsvg/RNSVGImageState.h>

namespace facebook {
namespace react {

ImageSource RNSVGImageState::getImageSource() const {
  return imageSource_;
}

ImageRequest const &RNSVGImageState::getImageRequest() const {
  return *imageRequest_;
}
//
//Float ImageState::getBlurRadius() const {
//  return blurRadius_;
//}

} // namespace react
} // namespace facebook
