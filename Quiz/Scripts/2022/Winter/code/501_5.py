try:
    
    a,b,c=9,7,8
    def h(a,b,c=6):
        print(a,b,c,end="")
    
    h(a=3,b=2,c=4)
    print(a,b,c)
    
except: print('error')
