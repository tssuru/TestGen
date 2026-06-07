try:
    
    a,b,c=8,8,7
    def h(a,b=9,c=6):
        print(a,b,c,end="")
    
    h(4,c=2,b=1)
    print(a,b,c)
    
except: print('error')
