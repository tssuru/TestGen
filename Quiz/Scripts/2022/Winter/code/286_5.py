try:
    
    a,b,c=9,8,7
    def g(a,b,c=6):
        print(a,b,c,end="")
    
    g(2,1,4)
    print(a,b,c)
    
except: print('error')
