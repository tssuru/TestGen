try:
    
    a,b,c=7,8,9
    def g(a,b,c):
        print(a,b,c,end="")
    
    g(3,5,a=1)
    print(a,b,c)
    
except: print('error')
