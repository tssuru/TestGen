try:
    
    a,b,c=7,9,8
    def g(a,b=6,c):
        print(a,b,c,end="")
    
    g(0,c=4)
    print(a,b,c)
    
except: print('error')
