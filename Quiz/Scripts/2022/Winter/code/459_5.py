try:
    
    a,b,c=9,8,6
    def h(a,b,c=8):
        print(a,b,c,end="")
    
    h(a=2,c=3,b=4)
    print(a,b,c)
    
except: print('error')
