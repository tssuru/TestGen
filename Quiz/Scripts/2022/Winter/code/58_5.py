try:
    
    a,b,c=6,9,8
    def g(a,b=9,c):
        print(a,b,c,end="")
    
    g(3,0)
    print(a,b,c)
    
except: print('error')
