try:
    
    a,b,c=6,8,9
    def h(a,b=7,c=7):
        print(a,b,c,end="")
    
    h(a=2,0,b=4)
    print(a,b,c)
    
except: print('error')
