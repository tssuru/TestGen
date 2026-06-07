try:
    
    a,b,c=8,7,6
    def h(a,b,c=9):
        print(a,b,c,end="")
    
    h(c=1,a=4,b=0)
    print(a,b,c)
    
except: print('error')
