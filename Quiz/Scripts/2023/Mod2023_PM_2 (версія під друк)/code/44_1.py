try:
    a,b,c=7,7,6
    def g(a,b=9,c=8):
        print(a,b,c,end=" ")
    
    g(a=4,a=5,b=4)
    print(a,b,c)
    
except: print('error')
