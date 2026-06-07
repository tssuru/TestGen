try:
    a,b,c=3,4,9
    def h(a):
        global c
        a-=2
        b=1
        c=4
        return a+b+c
    
    a,b,c=0,0,5
    print(h(a),a,b,c)
    
except: print('error')
