try:
    a,b,c=9,8,7
    def g(a,b=8,c):
        print(a,b,c,end=" ")
    
    g(c=5,a=3,b=1)
    print(a,b,c)
    
except: print('error')
