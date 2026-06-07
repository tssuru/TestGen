try:
    
    a,b,c=7,9,8
    def h(a,b,c=6):
        print(a,b,c,end="")
    
    h(5,c=3,b=1)
    print(a,b,c)
    
except: print('error')
