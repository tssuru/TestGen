try:
    
    a,b,c=7,8,9
    def h(a,b=6,c=7):
        print(a,b,c,end="")
    
    h(0,a=5)
    print(a,b,c)
    
except: print('error')
