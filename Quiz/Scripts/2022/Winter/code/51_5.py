try:
    
    a,b,c=8,7,8
    def h(a,b=9,c=6):
        print(a,b,c,end="")
    
    h(a=0,c=3,c=1)
    print(a,b,c)
    
except: print('error')
