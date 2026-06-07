try:
    
    a,b,c=9,8,6
    def g(a,b=8,c):
        print(a,b,c,end="")
    
    g(a=4,3,b=3)
    print(a,b,c)
    
except: print('error')
