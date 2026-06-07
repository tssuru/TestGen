try:
    
    a,b,c=9,8,6
    def g(a,b,c):
        print(a,b,c,end="")
    
    g(1,2,b=4)
    print(a,b,c)
    
except: print('error')
