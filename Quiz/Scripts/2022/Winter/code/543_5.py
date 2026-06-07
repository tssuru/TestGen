try:
    
    a,b,c=8,8,9
    def h(a,b=7,c=6):
        print(a,b,c,end="")
    
    h(2,c=3,b=5)
    print(a,b,c)
    
except: print('error')
