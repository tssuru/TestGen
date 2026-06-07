try:
    
    a,b,c=7,8,9
    def h(a,b=7,c=6):
        print(a,b,c,end="")
    
    h(b=3,c=0,1)
    print(a,b,c)
    
except: print('error')
