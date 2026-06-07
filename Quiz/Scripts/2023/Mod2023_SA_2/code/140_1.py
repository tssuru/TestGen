try:
    a,b,c=7,6,7
    def f(a,b=9,c=8):
        print(a,b,c,end=" ")
    
    f(1,c=4)
    print(a,b,c)
    
except: print('error')
