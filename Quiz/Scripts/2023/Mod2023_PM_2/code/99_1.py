try:
    a,b,c=6,9,8
    def f(a,b,c=7):
        print(a,b,c,end=" ")
    
    f(1,b=4)
    print(a,b,c)
    
except: print('error')
