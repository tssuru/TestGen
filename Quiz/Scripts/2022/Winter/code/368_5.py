try:
    
    a,b,c=6,8,9
    def h(a,b=7,c):
        print(a,b,c,end="")
    
    h(1,2,a=0)
    print(a,b,c)
    
except: print('error')
