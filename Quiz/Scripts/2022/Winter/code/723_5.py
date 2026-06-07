try:
    
    a,b,c=9,8,6
    def g(a,b=9,c=7):
        print(a,b,c,end="")
    
    g(2,1,a=3)
    print(a,b,c)
    
except: print('error')
