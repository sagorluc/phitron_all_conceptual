from django.contrib import admin
from blog1.models import Post

# Register your models here.
# admin.site.register(Post)

# modify admin panel
class BlogModifyAdmin(admin.ModelAdmin):
    list_display = ('title', 'author', 'body')
    
admin.site.register(Post, BlogModifyAdmin)
