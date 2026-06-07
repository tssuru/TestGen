try:
    a,b,c=6,9,7
    def f(a,b,c=8):
        print(a,b,c,end=" ")
    
    f(5,c=0,b=4)
    print(a,b,c)
    
except: print('error')
