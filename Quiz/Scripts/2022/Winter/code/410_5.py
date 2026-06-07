try:
    
    a,b,c=6,9,8
    def g(a,b=7,c):
        print(a,b,c,end="")
    
    g(5,0,2)
    print(a,b,c)
    
except: print('error')
