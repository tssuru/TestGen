try:
    a,b,c=6,7,8
    def g(a,b,c):
        print(a,b,c,end=" ")
    
    g(3,b=2)
    print(a,b,c)
    
except: print('error')
