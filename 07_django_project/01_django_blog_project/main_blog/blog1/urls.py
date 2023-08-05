from django.urls import path
from blog1.views import blog, BlogDetailView
from . import views

urlpatterns = [
    path('', views.BlogListView.as_view(), name= 'list_view'),
    path('post_detail/<int:pk>', BlogDetailView.as_view(), name= 'post_detail'), # dynamic
    path('blog/', views.blog, name= 'blog'),
   
]
