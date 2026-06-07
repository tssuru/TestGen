try:
    a,b,c=7,0,4
    def h(a):
        a-=1
        b=4
        c=2
        return a+b+c
    
    a,b,c=3,9,6
    print(h(a),a,b,c)
    
except: print('error')
