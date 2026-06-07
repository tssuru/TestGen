try:
    
    a,b,c=9,8,7
    def h(a,b=9,c=6):
        print(a,b,c,end="")
    
    h(1,4)
    print(a,b,c)
    
except: print('error')
