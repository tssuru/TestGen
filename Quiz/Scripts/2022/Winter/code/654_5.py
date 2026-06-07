try:
    
    a,b,c=6,7,8
    def h(a,b=9,c=6):
        print(a,b,c,end="")
    
    h(b=5,a=0,c=4)
    print(a,b,c)
    
except: print('error')
