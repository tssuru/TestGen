try:
    
    a,b,c=9,7,8
    def h(a,b=6,c=8):
        print(a,b,c,end="")
    
    h(b=3,c=2,4)
    print(a,b,c)
    
except: print('error')
