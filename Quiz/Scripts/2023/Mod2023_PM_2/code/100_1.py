try:
    a,b,c=6,7,9
    def g(a,b=8,c):
        print(a,b,c,end=" ")
    
    g(b=0,c=5,a=2)
    print(a,b,c)
    
except: print('error')
