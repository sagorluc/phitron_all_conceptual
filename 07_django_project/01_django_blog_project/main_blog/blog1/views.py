from django.shortcuts import render
from django.views.generic import ListView, DetailView
from blog1.models import Post

# Create your views here.

# Class based view
class BlogListView(ListView): # build-in ListView
    model = Post
    template_name = 'html_files/list_view.html'

# Class based view   
class BlogDetailView(DetailView): # build-in DetailView
    model = Post
    template_name = 'html_files/post_detail.html'

# Function based view
def blog(request):
    return render(request, 'html_files/blog1.html', {})
