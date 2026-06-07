try:
    
    a,b,c=7,8,9
    def h(a,b,c=8):
        print(a,b,c,end="")
    
    h(2,c=0,b=3)
    print(a,b,c)
    
except: print('error')
