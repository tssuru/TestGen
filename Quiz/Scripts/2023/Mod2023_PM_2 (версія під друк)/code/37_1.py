try:
    a,b,c=9,7,6
    def g(a,b,c=8):
        print(a,b,c,end=" ")
    
    g(5,c=3)
    print(a,b,c)
    
except: print('error')
