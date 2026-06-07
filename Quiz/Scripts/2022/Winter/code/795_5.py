try:
    
    a,b,c=9,8,6
    def g(a,b=9,c):
        print(a,b,c,end="")
    
    g(1,c=4)
    print(a,b,c)
    
except: print('error')
