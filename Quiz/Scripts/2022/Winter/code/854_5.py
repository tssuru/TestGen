try:
    
    a,b,c=8,6,7
    def g(a,b=9,c):
        print(a,b,c,end="")
    
    g(b=4,c=3,2)
    print(a,b,c)
    
except: print('error')
