try:
    
    a,b,c=9,9,8
    def h(a,b=7,c=6):
        print(a,b,c,end="")
    
    h(3,4,c=5)
    print(a,b,c)
    
except: print('error')
