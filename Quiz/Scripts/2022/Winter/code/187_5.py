try:
    
    a,b,c=7,9,8
    def g(a,b=6,c):
        print(a,b,c,end="")
    
    g(2,c=1)
    print(a,b,c)
    
except: print('error')
