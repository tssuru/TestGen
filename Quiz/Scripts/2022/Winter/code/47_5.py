try:
    
    a,b,c=9,7,8
    def h(a,b,c=6):
        print(a,b,c,end="")
    
    h(b=0,c=1,3)
    print(a,b,c)
    
except: print('error')
