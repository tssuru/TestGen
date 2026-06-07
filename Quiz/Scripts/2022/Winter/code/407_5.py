try:
    
    a,b,c=9,6,8
    def h(a,b,c=7):
        print(a,b,c,end="")
    
    h(0,1,b=3)
    print(a,b,c)
    
except: print('error')
