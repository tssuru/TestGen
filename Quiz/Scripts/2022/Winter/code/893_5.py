try:
    
    a,b,c=9,7,6
    def g(a,b,c=8):
        print(a,b,c,end="")
    
    g(3,3,5)
    print(a,b,c)
    
except: print('error')
