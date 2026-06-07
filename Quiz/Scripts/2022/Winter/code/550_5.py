try:
    
    a,b,c=9,7,8
    def g(a,b,c=6):
        print(a,b,c,end="")
    
    g(0,5)
    print(a,b,c)
    
except: print('error')
