try:
    a,b,c=9,6,7
    def f(a,b,c=8):
        print(a,b,c,end=" ")
    
    f(4,c=0)
    print(a,b,c)
    
except: print('error')
