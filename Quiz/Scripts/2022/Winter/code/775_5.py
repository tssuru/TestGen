try:
    
    a,b,c=7,7,8
    def h(a,b=6,c):
        print(a,b,c,end="")
    
    h(a=1,3,a=5)
    print(a,b,c)
    
except: print('error')
