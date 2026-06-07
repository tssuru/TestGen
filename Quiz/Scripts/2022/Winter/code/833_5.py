try:
    
    a,b,c=9,8,6
    def g(a,b=7,c):
        print(a,b,c,end="")
    
    g(b=5,c=1,a=4)
    print(a,b,c)
    
except: print('error')
