
Pod::Spec.new do |s|
  s.name         = "privatePodUIView"
  s.version      = "1.0.1"
  s.summary      = "哈哈哈"
  s.license      = "MIT"
  s.homepage     = "http://aotu.io/"
  s.author             = { "LazyJiu" => "248301344@qq.com" }
  s.platform     = :ios, "9.0"
  s.source       = { :git => "https://github.com/LazyJiu/privatePod1.git", :tag => s.version }
  s.source_files  = "UIView/*.{h,m}"
  s.requires_arc = true
end
