try:
    
    a,b,c=8,8,6
    def h(a,b=9,c=7):
        print(a,b,c,end="")
    
    h(1,a=2)
    print(a,b,c)
    
except: print('error')
