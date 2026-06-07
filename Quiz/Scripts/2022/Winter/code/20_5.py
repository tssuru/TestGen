try:
    
    a,b,c=8,8,9
    def h(a,b=6,c=7):
        print(a,b,c,end="")
    
    h(1,5)
    print(a,b,c)
    
except: print('error')
