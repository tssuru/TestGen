try:
    a,b,c=6,8,9
    def g(a,b,c=7):
        print(a,b,c,end=" ")
    
    g(b=2,c=5,0)
    print(a,b,c)
    
except: print('error')
