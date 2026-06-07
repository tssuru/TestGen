try:
    
    a,b,c=9,6,8
    def h(a,b,c=7):
        print(a,b,c,end="")
    
    h(1,0,a=2)
    print(a,b,c)
    
except: print('error')
